#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Block {
    int size;
    int is_free;
    int process_size; // Size of the process currently occupying the block
    struct Block *next;
} Block;

Block* createBlock(int size) {
    Block *new_block = (Block *)malloc(sizeof(Block));
    if (new_block == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return NULL;
    }
    new_block->size = size;
    new_block->is_free = 1;
    new_block->process_size = 0; // Initially no process is occupying the block
    new_block->next = NULL;
    return new_block;
}

void addBlock(Block **head, int size) {
    Block *new_block = createBlock(size);
    if (*head == NULL) {
        *head = new_block;
    } else {
        Block *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_block;
    }
}

int allocateMemory(Block *head, int process_size, const char *method, char error_msgs[][256], int error_index) {
    Block *current = head;
    Block *selected = NULL;

    if (strcmp(method, "First-Fit") == 0) {
        while (current != NULL) {
            if (current->is_free && current->size >= process_size) {
                selected = current;
                break;
            }
            current = current->next;
        }
    } else if (strcmp(method, "Best-Fit") == 0) {
        while (current != NULL) {
            if (current->is_free && current->size >= process_size &&
                (selected == NULL || current->size < selected->size)) {
                selected = current;
            }
            current = current->next;
        }
    } else if (strcmp(method, "Worst-Fit") == 0) {
        while (current != NULL) {
            if (current->is_free && current->size >= process_size &&
                (selected == NULL || current->size > selected->size)) {
                selected = current;
            }
            current = current->next;
        }
    }

    if (selected != NULL) {
        selected->is_free = 0;
        selected->process_size = process_size;
        return 1;
    } else {
        sprintf(error_msgs[error_index], "Error: No suitable block found for %dKB using %s", process_size, method);
        return 0;
    }
}

void displayBlocks(Block *head, const char *method) {
    printf("\n%s Allocation Table:\n", method);
    printf("Block Size\tAllocated Size\tFree Space\tStatus\n");
    Block *current = head;
    while (current != NULL) {
        printf("%dKB\t\t%dKB\t\t%dKB\t\t%s\n", 
            current->size, current->process_size, 
            current->size - current->process_size,
            current->is_free ? "Free" : "Allocated");
        current = current->next;
    }
}

void resetBlocks(Block *head) {
    Block *current = head;
    while (current != NULL) {
        current->is_free = 1;
        current->process_size = 0;
        current = current->next;
    }
}

int main() {
    Block *head = NULL;
    int num_partitions, num_processes, size, i, j;

    printf("Enter the number of memory partitions: ");
    scanf("%d", &num_partitions);
    for (i = 0; i < num_partitions; i++) {
        printf("Enter size of partition %d (in KB): ", i + 1);
        scanf("%d", &size);
        addBlock(&head, size);
    }

    printf("Enter the number of processes: ");
    scanf("%d", &num_processes);
    int process_sizes[num_processes];
    char error_msgs[num_processes][256];

    for (i = 0; i < num_processes; i++) {
        printf("Enter size of process %d (in KB): ", i + 1);
        scanf("%d", &process_sizes[i]);
    }

    printf("\nNEHA GEORGE-S4 CS GAMMA\n");
    char *methods[] = {"First-Fit", "Best-Fit", "Worst-Fit"};
    for (i = 0; i < 3; i++) {
        resetBlocks(head);
        int error_count = 0;
        for (j = 0; j < num_processes; j++) {
            if (!allocateMemory(head, process_sizes[j], methods[i], error_msgs, error_count)) {
                error_count++;
            }
        }
        displayBlocks(head, methods[i]);
        for (int k = 0; k < error_count; k++) {
            printf("%s\n", error_msgs[k]);
        }
        printf("\n");
    }

    return 0;
}
