#include <stdio.h>
#include <string.h>
struct student {
    int id;
    int age;
    char name[32];
};

int main() {
    struct student s1;
    s1.id = 10;
    s1.age = 18;
    strcpy(s1.name, "Tom");
    printf("id: %d\n", s1.id);
    printf("age: %d\n", s1.age);
    printf("name: %s\n", s1.name);

    struct student s2 = {11, 20, "Jerry"};
    printf("id: %d\n", s2.id);
    printf("age: %d\n", s2.age);
    printf("name: %s\n", s2.name);

    return 0;
}