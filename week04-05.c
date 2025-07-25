#include <stdio.h>

// ฟังก์ชันที่ใช้ static variable
void countCallStatic() {
    static int counter = 0;  // ค่าจะไม่ถูกรีเซ็ตเมื่อเรียกฟังก์ชันซ้ำ
    counter++;
    printf("Static Function: Counter = %d\n", counter);
}

// ฟังก์ชันที่ใช้ non-static variable
void countCallNonStatic() {
    int counter = 0;         // ค่าจะถูกรีเซ็ตเป็น 0 ทุกครั้งที่เรียก
    counter++;
    printf("Non-Static Function: Counter = %d\n", counter);
}

int main() {
    printf("== เรียกฟังก์ชันแบบ Static ==\n");
    countCallStatic(); // ครั้งที่ 1 → ได้ 1
    countCallStatic(); // ครั้งที่ 2 → ได้ 2

    printf("\n== เรียกฟังก์ชันแบบ Non-Static ==\n");
    countCallNonStatic(); // ครั้งที่ 1 → ได้ 1
    countCallNonStatic(); // ครั้งที่ 2 → ได้ 1 อีกครั้ง (เพราะรีเซ็ต)

    return 0;
}
//คำถามท้ายโจทย์
//1. ต่างกัน เพราะ static จะเก็บตัวแปรไว้ในหน่วยความจำถาวรของฟังก์ชัน แต่ non-static จะสร้างใหม่ทุกครั้งที่เรียกฟังก์ชัน
//2.non-static อยู่ในหน่วยความจำชั่วคราว และจะหายไปเมื่อฟังก์ชันทำงานเสร็จ
//3.static เก็บค่าคงอยู่ระหว่างการเรียกฟังก์ชัน non-static เริ่มต้นใหม่ทุกครั้งที่เรียกฟังก์ชันจึงได้ผลลัพธ์ต่างกัน เพราะการจัดเก็บค่าคนละแบบ