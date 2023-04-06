#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
// struct node{
//     struct node *next;
//     struct node *prev; 
// };

struct node{
    //struct node n;
    struct node *next;
    struct node *prev; 
    size_t size;
    char * block;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *curr = NULL;

int main(){

    struct node mn;
    return 0;
}