#include <stdio.h>

int main() {
    char nameInitial = 'Title';             // ตัวอักษร 1 ตัว ใช้ char
    int age = 19;                        // อายุเป็นจำนวนเต็ม ใช้ int
    float weight = 60;               // น้ำหนักเป็นทศนิยม ใช้ float
    char gender[] = "male";            // เพศเป็นข้อความ ใช้ char array หรือ string

    // แสดงผลลัพธ์
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);  // แสดงทศนิยม 2 ตำแหน่ง
    printf("gender = %s\n", gender);    // แสดง string

    return 0;

}