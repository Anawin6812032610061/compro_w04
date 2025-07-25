#include <stdio.h>

// ประกาศตัวแปร constant แบบ Global
const int GLOBAL_RATE = 10;

void calculate() {
    // ประกาศตัวแปร constant แบบ Local (ใช้ได้เฉพาะในฟังก์ชันนี้เท่านั้น)
    const int LOCAL_BONUS = 50;

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);    // เข้าถึงตัวแปร global ได้
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);    // เข้าถึงตัวแปร local ได้
}

int main() {
    calculate();

    // เข้าถึงตัวแปร global ได้จาก main
    printf("GLOBAL_RATE in main = %d\n", GLOBAL_RATE);

    // * ข้อผิดพลาด: LOCAL_BONUS ถูกประกาศใน calculate() เท่านั้น *
    // ไม่สามารถใช้ LOCAL_BONUS ใน main ได้
    // ถ้าเปิดบรรทัดนี้จะ compile error
    // printf("LOCAL_BONUS in main = %d\n", LOCAL_BONUS); 

    return 0;
}
//คำอธิบายผลการทำงาน (ตอบคำถามท้ายโจทย์)
//1.GLOBAL_RATE เป็น ค่าคงที่แบบ Global ใช้ได้ทุกฟังก์ชัน LOCAL_BONUS เป็นค่าคงที่แบบ Local ใช้ได้แค่ในฟังก์ชัน calculate() เท่านั้น
//2.ถ้าเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80; จะ error เพราะทั้งสองเป็น const ซึ่ง ห้ามเปลี่ยนค่า
//3.LOCAL_BONUS เรียกใช้ใน main() ไม่ได้ เพราะมันเป็น ตัวแปรแบบ local ที่ประกาศในฟังก์ชัน calculate() จึง มองเห็นและใช้ได้เฉพาะในฟังก์ชันนั้น เท่านั้น
//4.GLOBAL_RATE ใช้ได้ทุกฟังก์ชันเพราะเป็นค่าคงที่แบบ Global ส่วน LOCAL_BONUS ใช้ได้เฉพาะในฟังก์ชัน calculate() เพราะเป็นแบบ Local และค่าคงที่ (const) เปลี่ยนค่าไม่ได้
