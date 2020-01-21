/* Copyright 2020 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>
#include "sh68f83.h"

a3FC0 = 

void main(void) {
	B = 0xA5;
    PRCON = 0x00;
    CLRWDT = 0x55;
    if (MODE_FG & POF)
        // L0002
    else {
        if (!(MODE_FG & USBRST))
            // L0003        
        else {
            if (&0x20 != 0x41 || &0x20 != &0x24 || &0x21 != 0x4B || 
                &0x22 != 0x49 || &0x23 != 0x52) {
                // L0003
            }

            // L0004
            CLRWDT = 0x55;
            SP = 0x27;
            PSW = 0;
            P4CON = 0x60;
            PORT4 = 0x7F;
            if (MODE_FG & 0xA) {
                DFC = 0x01
                // L0006
                DPTR = 0x3FBA;
                R0 = 0x20;
                R1 = 0x06;
                // L0579
                while (B != 0xA5);
                // L0580

                // L0007
                DFC = 0xC2;
            }
            // L0005
            // L0008
            DFC = 0xCA;
            PREWDT = 0x03;
        }
    }
}

void L0121(void) {
    // L0121
    ACC = *DPTR;
    DPTR++;
    R0 = ACC;

    // L0129
    do {
        ACC = *DPTR;
        DPTR++;
        if (!c) {
            *R0 = ACC;
        } else {
            // L0127
            // MOVX, external memory via PORT0?
            *R0 = ACC;
        }
        // L0128
        R0++
    } while (R7 != 0);

    do {
        // L0122
        ACC = *DPTR;
        DPTR++;
        R0 = ACC;
        R0 &= 0x07;
        R0 += 0x0C;
        if (ACC > 0x7F)
            c = true;
        ACC * 2;
        ACC = swap(ACC); // swap nibbles
        ACC &= 0x0F;
        ACC |= 0x20;
        ACC <> R0; 
        // this might be accessing a bit op array that comes shortly after this
        // MOVC A, @A+PC
        if (c) {
            // L0125 jump
            ACC |= *R0;
        } else {
            ACC = ~ACC;
            ACC &= *R0;
        }
        // L0126
        *R0 = ACC;
        R7
    } while (R7 != 0);

    // L0124 jump
    R6 = 0x01;
    ACC = *DPTR;
    if (ACC == 0)
        // L0119
    DPTR++;
    R7 == ACC;
    ACC &= 0x3F;
    if (ACC & 0x20) {
        ACC &= 0x1F;
        R6 = ACC;
        ACC = *DPTR;
        DPTR++;
        if (ACC != 0)
            R6++;
    }
    // L0120
    A <> R7
    ACC &= 0xC0;
    ACC += ACC;
    if (ACC)

}


void L0130(void) {
    // L0130
    EA = 0;
    PSW &= 0xE7;
    L0131();
    L0132();
}

void L0131(void) {
    // L0131
    PREWDT = 0;
    CLRWDT = 0x55;
    // ret
}

void L0132(void) {
    // L0132
    if (r96 & 0x02) {
        r1B = 1; // or 0xFF?
        // L0476 jump
        L0477() // call
        r96 = 0;
        L0131(); // jump
    } else {
        // L0475
        if (r96 & 0x04) { 
            // L0499 call {
            L0131();
            L0478();
            // L0482 call {
                DADDR = 0
                r3C = 0x7D;
                r3D = 0x7D;
                r3E = 0x01;
                R7 = 0;
                // L0484
                do {
                    R0 = 0x95 + R7;
                    *R0 = 0
                    R0 = 0x97 + R7;
                    *R0 = 0
                    R7++;
                }
                while (R7 != 0x02);
                r44 = 0x01;
            // } L0482
            r20 = 0x82;
            R7 = 0xCA;
            // L0483
            DFC = R7;
            // ret from L0483
            // } L0499
            // L0500 jump
        } else {
            // L0498
            if (r96 & 0x08) {
                // L0502
                // L0500
            } else {
                // L0501
                if (r96 & 0x01) {
                    // L0506 call
                    // L0507 jump
                    // L0131 jump
                } else {
                    // L0476 jump
                    L0477() // call
                }
            }
        }
    }
}

void L0134(void) {
    // L0134
    // L0135
    r2E = 0x14;
    BT1 = 0xCE;
    IF &= 0xF7;
    IF &= 0xFD;
    BTCON = 0xA0;
    IE = 0x88;

    R0 = 0xB7;
    *R0 = 0x01;
    R0 = 0xBB;
    *R0 = 0;
    R0++; // 0xBC i guess
    *R0 = 0;
    R0 = 0xBD;
    *R0 = 0;
    R0++; // 0xBE
    *R0 = 0;
    L0136();
    R5 = 0x01;
    R7 = 0xA0;
    L0137();
    R5 = 0x01;
    R7 = 0x00;
    L0137();
    L0138();
    L0136();
    R5 = 0x01;
    R7 = 0xA0;
    L0137();
    R7 = 0x01
    L0139();
    R0 = 0x17;
    if (*R0 == 0xFF)
        *R0 = 0;

    L0140();
}

// L0136
void L0136(void) {
    P3CON |= 0x05;
    L0190(); // wait a lil
    P3CON &= 0xFE;
    PORT3_0 = 0;
    L0219(); // wait a lot
    P3CON &= 0xFB;
    PORT3_2 = 0;
}

// L0137
// something with i2c stuff - P30 and P32 are SDA and SCL
void L0137(void) {
    r6B = 0;
    R6 = 0;
    // L0236
    do {
        ACC = R7;
        if (ACC & 0x80 == 0) {
            // L0234
            P3CON &= 0xFE;
            PORT3_0 = 0;
        } else {
            P3CON |= 0x01;
        }
        // L0235
        // 6 nops
        P3CON |= 0x04;
        R7 += ACC;
        // 12 nops
        P3CON &= 0xFB;
        PORT3_2 = 0;
        R6++;
    } while (R6 != 0x08);

    // 12 nops
    P3CON |= 0x01;
    // 6 nops
    P3CON |= 0x04;
    L0190();
    R5 = PORT3_0;
    P3CON &= 0xFB;
    PORT3_2 = 0;
    if (R5 != 0x01) {
        R7 = 0xFA;
    } else {
        R7 = 0xFB;
    }
}

void L0138(void) {
    // L0138
    P3CON &= 0xFE;
    PORT3_0 = 0;
    L0190();
    P3CON |= 0x04;
    L0219();
    P3CON |= 0x01;
}


// main loop possibly
void L0140(void) {
    // L0140
    while (true) {
        L0131(); // call and ret
        // L0141 call {
        IRQEN |= 0x06;
        IE2 |= 0x5B;
        IE |= 0x80;
        PSW ^= 0xE7;
        // ret } L0141
        if (r03) { // interupt revieced? run matrix scan
            L0142(); // jump
            return;
        }
        r21 = 0;
    }
}
void L0142(void) {
    // L0142
    L0143();
    L0144();
    r63 = 0x12;
    // L0147
    while (true) {
        if (r63 == 0)
            break;
        r63--;
        // L0146 call
        if (r09)
            return; // L0148
        L0149(); // matrix scan put port resutls in r39
        if (r0F) {
            // L0151
            // L0152
            r27 = 0;
            r26 = 0;
        }
        // L0150
        if (r27 != 0) {
            // L0153 
            R0 = r26 + 0x6E;
            ACC = *R0 ^ r39;
            if (ACC == 0) {
                // L0155 jump
                r26++;
                if (0x12 <= r26)
                    return;
                // L0156 jump
                // L0157 call {
                R7 = 0;
                R6 = 0;
                // L0183
                do {
                    ACC = 0x6E;
                    ACC += R6;
                    R0 = ACC;
                    ACC = *R0;
                    R5 = ACC;
                    ACC &= R7;
                    R4 = ACC;
                    ACC = R5;
                    r07 &= ACC;
                    ACC = R4;
                    if (ACC) {

                    }
                    // L0182
                    R6++;
                } while (R6 != 0x12);
                c = 0;
                // ret
                // } L0157
            }
            // L0151
        } else {
            R0 = r26 + 0x6E;
            *R0 = r39; // put scan result into an array
            r26++;
            if (r26 <= 0x12)
                return;
            // L0154
            r27++;
            r26 = 0;
            return;
        }

    }
    L0145(); // keymap parse with r51, r37 (index from 0x82), 0x80 0x81
}

// updates the hardware cuts based on values at 0x17
void L0143(void) {
    // L0143
    R0 = 0x17;
    R6 = *R0;
    if (R6 & 0x01) { // mic cut
        PORT3_1 = 0;
    } else {
        // L0407
        PORT3_1 = 1;
    }
    // L0408
    if (R6 & 0x02) { // wifi cut
        PORT3_6 = 0;
    } else {
        // L0409
        PORT3_6 = 1;
    }
    // L0410
    if (R6 & 0x04) { // cam cut
        PORT3_7 = 0;
    } else {
        // L0411
        PORT3_7 = 1;
    }
    // start of usb endpoint 1 transmit
    // L0412
    if (rE4 & 0x08 == 0)
        return; // L0413 from jump
    if (rE4 & 0x03)
        return; // L0413 from jump
    if (r22 == 0)
        return; // L0413 from jump
    r22 = 0;
    if (r96 & 0x08) {
        r96 &= 0xEF;
        return;
    }
    // L0414
    EA = 0;
    R0 = 0xAC;
    TXDAT1 = *R0;
    TXDAT1 = 0;
    if (r08) {
        R7 = 0;
        // L0416
        do {
            TXDAT1 = 0x01;
            R7++;
        } while (R7 != 0x06);
    } else {
        // L0415
        R7 = 0;
        do {
            // L0418
            R0 = R7 + 0xAD;
            TXDAT1 = *R0;
            R7++;
        } while (R7 != 0x06);
    }

    // L0417
    EA = 1; // or maybe 0xFF
    TXCNT1 = 0x08;
    TXFLG1 |= 0x01;
    r3D = r3C; // MOV 3Dh, 3Ch - direction may be reversed?
    r3A = 0;
    r45 = 0;
    return; // L0413 from next op
}

void L0144(void) {
    // start of usb endpoint 2 transmit
    // L0144
    if (rE7 & 0x04)
        return; // L0472 from jump
    if (rE7 & 0x03)
        return; // L0472 from jump
    if (r45)
        return; // L0472 from jump
    if (r20) { 
        r20 = 0;
        EA = 0;
        TXDAT2 = 0x02;
        R0 = 0xB3;
        TXDAT2 = *R0;
        TXCNT2 = 0x02;
    } else {
        // L0473
        if (r21 == 0)
            return; // L0472 from jump
        r21 = 0;
        EA = 0;
        TXDAT2 = 0x03;
        R0 = 0xB4;
        TXDAT2 = *R0;
        R0++;
        TXDAT2 = *R0;
        R0++;
        TXDAT2 = *R0;
        TXCNT2 = 0x04;
    }
    // L0474
    EA = 1; // or maybe 0xFF
    TXFLG2 |= 0x01;
    r3A = 0;
    r45 = 0;
    return ; // L0472 from next op
}

// a222C = {   0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F, 
//             0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F,
//             0xEF, 0xDF
//         }; 

// a223E = {   0, 0, 0, 0, 0, 0, 0, 0,
//             1, 1, 1, 1, 1, 1, 1, 1,
//             3, 3
//         };

// L0149
// martix scan
void L0149(void) {
    L0184(); // call
    if (r26 > 0x12) { // this is probably a loop exit for # of rows
        // L0185
        r0F = 1;
        // L0192
        L0184(); // jump
        // might return here
    }
    R7 = *(0x223E + r26); // ports for columns (0, 1, 3)
    if (R7 > 0x04) || ((R7 ^ 0x02) == 0) { // loop exit for the number of cols
        // L0186
        r0F = 1;
        // L0192
        L0184();
        // might return here
    }
    if (R7 == 0) {
        PORT0 = L0188(r26); // pins for ports (active pull down)
    } else {
        // L0187
        ACC = *(0x223E + r26);
        if (ACC == 0x01) {
            PORT1 = L0188(r26);
        } else {
            // L0195
            // this is a manual configuration of port3 because there's only two pins
            ACC = L0188(r26);
            if (ACC == 0xEF) {
                PORT3_4 = 0;
                PORT3_5 = 1;
            } else {
                // L0196
                PORT3_4 = 1;
                PORT3_5 = 0;
            }
        }
    }
    // L0189
    // debouncing most likely, reading from port 2 (rows)
    do {
        L0190();
        r39 = PORT2;
        L0190();
        ACC = r39;
    } while (ACC != PORT2);
    R7 = PORT2;
    L0191();
    ACC = ~R7;
    r39 = ACC;
    r0F = 0;
    // L0192
    L0184(); // jump
}

void L0168(void) {
    R7++;
    ACC = R7;
    if (0x08 < R7) {
        L0170(); // jump
    }
    // L0169
    c = 1;
}

void L0170(void) {
    r68 |= 0x80;
    ACC = r68;
    ACC += ACC;
    ACC++;
    r68 = ACC;
    r0A = 0;
    ACC = r67;
    if (ACC & 0xF0)
        r0A = 1; // or 0xFF?
    // L0165
    ACC = r67;
    ACC += ACC;
    r67 = ACC;
    ACC = r65;
    if (!(ACC & 0xF0)) {
        if (R7 == 0x07) {
            C = 0;
            return;
        } else {
            // L0167
            ACC = r65;
            ACC += ACC;
            r65 = ACC;
            // L0168 jump
        }
    }
    // L0166
    ACC = r65;
    ACC += ACC;
    r65 = ACC;
    ACC = r66;
    if (0x12 < r66) {
        C = 1;
        return;
    }
    // L0171
    r51++;
    ACC = r51;
    ACC &= 0x0F;
    r51 = ACC; // may be setting up how many key actions to process
    ACC = r66;
    ACC << 3;
    ACC &= 0xF8;
    ACC |= R7;
    R6 = ACC;
    ACC = 0x82;
    ACC += r51;
    R0 = ACC;
    *R0 = r06;
    ACC = r51;
    ACC = L0172(ACC);
    R6 = ACC;
    if (!r0A) {
        if (r51 & 0x08) {
            ACC = R6;
            ACC = ~ACC;
            R0 = 0x81;
            ACC &= *R0;
            *R0 = ACC;
        } else {
            // L0174
            ACC = R6;
            ACC = ~ACC;
            R0 = 0x80;
            ACC &= *R0;
            *R0 = ACC;
        }
    } else {
        // L0173
        if (r51 & 0x08) {
            R0 = 0x81;
        } else {
            // L0180
            R0 = 0x80;
        }
        // L0181
        ACC = *R0;
        ACC |= R6;
        *R0 = ACC;
    }
    // L0175
    ACC = r51;
    ACC ^= r37;
    if (ACC) {
        ACC = R7;
        ACC ^= 0x07;
        if (ACC == 0) {
            c = 0;
            return;
        } else {
            L0168();
        }
    }
    // L0176
}

// L0172
// bit op lookup, 0x01, 0x02, 0x04, etc
uint8_t L0172(uint8_t a) {
    return *(0x271D + a);
}



// L0184
void L0184(void) {
    P2CON = 0;
    P1CON = 0;
    P0CON = 0;
    P3CON = 0x0D;
    PORT0 = 0xFF;
    PORT1 = 0xFF;
    PORT2 = 0xFF;
    PORT3_4 = 1;
    PORT3_5 = 1;
}

// L0188
// PORT configuration lookup
uint8_t L0188(uint8_t r26) {
    return *(0x222C + r26)
}

// L0190
// wait command of some sort?
void L0190(void) {
    // 6 nops
}

// L0191
void L0191(void) {
    ACC = 0;
    R6 = ACC;
    R5 = ACC;
    do {
        // L0194
        ACC = R6;
        ACC += ACC;
        R6 = ACC;
        ACC = R5;
        ACC = *(0x2224 + ACC); // another bit op array lookup??
        ACC &= R7;
        if (ACC != 0)
            r06 |= 0x01;
        R5++;
    } while (R5 != 0x08);
    R7 = r06;
}

// L0219
void L0219(void) {
    L0220();
    // 18 nops
}

// L0220
void L0220(void) {
    // 12 nops
}

void L0228(void) {
    r65 = R7;
    r66 = R3;
    r67 = R2;
    r68 = R1;
    L0136();
    ACC = r65;
    ACC += ACC;
    ACC |= 0x01;
    R7 = ACC;
    R5 = 0x01;
    L0137();
    ACC = R7;
    ACC ^= 0xFA;
    if (ACC != 0) {
        // L0271
        L0138();
        R7 = 0xFB;
        return;
    }
    r6A = ACC;
    // L0274
    ACC = r69;
    ACC--;
    R7 = ACC;
    ACC = r6A;
    ..
}

void L0247(void) {
    // L0247
    r65 = R7;
    r66 = R5;
    r67 = R3;
    r6C = 0;
    // L0252
    while (true) {
        if (!(TXFLG2 & 0x08)) {
            // L0250
            L0131();
        } else {
            ACC = TXFLG2;
            ACC = 0x03;
            break;
        }
    }

    // L0251 jump
    if (r24)
        return; // L0254 jump
    
    // L0253
    R0 = 0xD5;
    ACC = *R0;
    R7 = ACC;
    ACC &= 0x03;
    if (ACC)
        return; // L0254 jump

    // L0255
    R0 = 0xCF;
    ACC = *R0;
    ACC &= 0x18;
    if (ACC != 0) {
        ACC = R7;
        if (ACC & 0x02)
            r6C = 0x01;
    }

    // L0256
    EA = 0;
    TXDAT2 = 0x1E;
    R0 = 0xD5;
    ACC = *R0;
    if (ACC & 0x01) {
        R3 = r68;
        R2 = r69;
        R1 = r6A;
        R6 = r02;
        R7 = r01;
        ACC = R7;
        ACC |= R6;
        if (ACC == 0) {
            ACC = r66;
            ACC = swap(ACC);
            ACC &= 0xF0;
            R7 = ACC;
            ACC = r6C;
            ACC = swap(ACC);
            ACC = ACC << 3;
            ACC &= 0x80;
            ACC |= R7;
            R7 = ACC;
            ACC = r67;
            ACC += ACC;
            ACC += ACC;
            ACC |= R7;
            ACC |= r65;
            ACC |= r6B;
            TXDAT2 = ACC;
            DPTR = 0x0001;
            ACC = L0258();
            TXDAT2 = ACC;
            ACC = L0259();
            TXDAT2 = ACC;
            DPTR = 0x0003;
            ACC = L0258();
            TXDAT2 = ACC;
            DPTR = 0x0002;
            ACC = L0258();
            ACC &= 0x0F;
            TXDAT2 = ACC;
            // L0260
        }
    }

    // L0257

    // L0260
} 

uint8_t L0258(void) {
    // L0258
    c = R3 < 0x01;
    if (R3 == 0x01) {
        DPL += R1;
        DPH += R2;
        return *DPTR;
    } else {
        // L0261 jump
        if (c) {
            R0 = R1 + DPL;
            return *R0;
        } else {
            // L0262 jump
            if (R3 == 0xFE) {
                ACC = R1;
                R0 = R1 + DPL;
                return *R0;
            } else {
                // L0263
                DPL += R1;
                DPH += R2;
                return *DPTR;
            }
        }
    }
}

uint8_t L0259(void) {
    // L0259
    if (R3 > 0x01) {
        // L0264
        return *R1;
    }
    DPL = R1;
    DPH = R2;
    return *DPTR;
}

void L0286(void) {
    // L0286
    R0 = 0x93;
    ACC = *R0 + 0x0F;
    // not sure how this flows yet
    if (ACC) {
        ACC--;
        if (ACC) {
            // L0288
            ACC += 0xFE;
            if (ACC) {
                // L0309
                ACC--;

            } else {
                // J0310
            }
        } else {
            // L0289
        }
    }
    // L0287
}

// L0294
void L0294(void) {
    R7 = *0x2401; // 0x1A;
    R3 = 0xFF;
}

void L0297(void) {
    EA = A;
    BT1 = 0xFC;
    BTCON = 0xF0;
    IF &= 0xF7;
    // L0308
    while (true) {
        if (R7 == 0)
            return; // L0306
        // L0307
        do {
            L0131();
        } while (!(IF & 0x08));
        IF &= 0xF7;
        R7--;
    }
}

// L0299
void L0299(void) {
    DPTR = 0x2401;
    ACC = *DPTR;
    R7 = ACC;
    R3 = 0x00;
    R2 = 0x00;
    R1 = 0xAB;
    r69 = 0x01;
}

// L0302
void L0302(void) {
    r65 = R7;
    r66 = R3;
    r67 = R2;
    r68 = R1;
    L0136();
    R7 = r65 + ACC;
    R5 = 0x01;
    L0137();
    if (R7 != 0xFA) {
        // L0303
        L0138();
        R7 = 0xFB;
        return;
    }
    // L0305
    while (true) {
        R7 = r69;
        r69--;
        if (R7 == 0) {
            // L0304
         L0138();();
            R7 = 0xFA;
            return;
        }
        R3 = r66;
        R2 = r67;
        R1 = r68;
        R7 = L0259();
        R5 = 0x01;
        L0137();
        r68++;
        r67 += c; // leftover from previous op
    }
}

void L0316(void) {
    // L0316
    EA = 0;
    L0317();
    ACC = R7;
    ACC ^= 0xFA;
    if (ACC == 0) {
        DPTR = 0x2401; 
        ACC = *DPTR + ACC; // 0x1A
        R7 = ACC;
        R3 = 0xFF;
        R2 = 0x23;
        R1 = 0xFC;
        DPTR = 0x23FB; 
        ACC = *DPTR; // 0x03
        r69 = ACC;
        L0302();
        if (R7 == 0xFA) {
            R0 = 0xAB;
            ACC = *R0;
            R0 = 0x92;
            if (ACC == 0x01) {
                *R0 = 0xE5;
            } else {
                // L0320
                *R0 = 0xD5;
            }
        }
    } else {
        // L0318
        R0 = 0x92;
        *R0 = 0xD5;
    }
    // L0321
    R0 = 0x93;
    *R0 = 0xFC;
    EA = 1; // or 0xFF?
}

void L0331(void) {
    // L0331
    R7 = ACC;
    R3 = 0xFF;
    r69 = *DPTR; // &0x23F7, 0x03
}

// L0343
void L0343(uint16_t DPTR) {
    ACC = *DPTR;
    r69 = ACC;
    L0302();
    R0 = 0xD7;
    ACC = R7;
    *R0 = R7;
}

// L0344
void L0344(void) {
    R7 = 0x05;
    L0297();
    L0294();
    R2 = 0x23;
    R1 = 0xEB;
    L0343(0x23EA);
    if (R7 == 0xFB)
        R7 = 0xFB;
    // L0345
    L0299();
    // L0228
}

// L0369
uint8_t L0369(uint8_t r64) {
    c = *0x0A;
    a = 0;
    a *= 2;
    r7 = a;
    r5 = r64;
}


void L0145(void) {
    // L0145
    // L0197 call
    if (r51 != r37) {
        // L0356 jump
        r37++;
        r37 &= 0x0F;
        // L0358 call
        R0 = r37 + 0x82;
        R7 = *R0;
        if (R7 >= 0x90)
            return; // L0360

        // where the actual keymap gets loaded

        // L0359
        r65 = *((2 * R7) + 0x815); // fn key
        r64 = *((2 * R7) + 0x816); // normal
        if (r65 == 0)
            return; // L0360
        // L0361
        // L0362 call {
        if (r37 & 0x08) {
            ACC = L0172(r37);
            R0 = 0x81;
            ACC &= *R0;
            R7 = ACC;
        } else {
            // L0468
            ACC = L0172(r37);
            R0 = 0x80;
            ACC &= *R0;
            R7 = ACC;
        }
        // L0469
        if (R7 == 0) { // something set at 0x80/0x81 earlier on
            r0A = 0;
        } else {
            // L0470
            r0A = 1; // this is pressed vs released
        }
        // L0471
        // ret } L0362
        
        if (r65 == 0x04) {
            // one of these, with r64=0 possibly fn?
            if (r0A) {
                r26 = 1;
            } else {
                // L0364
                r26 = 0;
            }
        }
        // L0363 jump
        if (!r0A) {
            // L0366 jump
            if (r65 == 0x02) {
                // 7 of these, with non-seq r64 values
                // possibly modifier keys
                if (r64 == 0x08) {
                    // special action for gui key?
                    // this is probably causing the bug in 
                    // ayufan-rock64/pinebook-pro-keyboard-updater#7
                    R0 = 0x15;
                    *R0 = 0;
                }
                // L0368
                L0369(); // call and ret
                L0370(); // jump and ret, this sets modifiers to 0xAC
                return; // beyond L0359 apparently
            }
            // L0367
            if (r65 == 0x01) {
                // indicates it's a normal key and can be passed through
                // L0422
                L0369(); // call and ret
            }
            // L0372
            if (r65 == 0x03) {
                // as far as i can tell there's none of these in r65
                // L0424
                L0369(); // call and ret
                L0384(); // jump
                return;
            }
            // L0383
            if (r65 == 0x05) {
                // none in r65
                // L0426
                L0369(); // call and ret
                // L0389
                if (R7) {
                    R0 = 0xB3;
                    if (*R0 & R5)
                        return; // L0391
                    ACC = ;
                    ACC = *R0 | R5;
                } else {
                    // L0390
                    R0 = 0xB3;
                    if (*R0 & R5 == 0)
                        return; // L0391
                    ACC = ~R5 & *R0;
                }
                // L0392
                *R0 = ACC;
                r20 = 1;
                return; // L0391
            }
            // L0388
            if (r65 == 0x06) {
                // 6 of these with incrementing r64 values
                // consumer page maybe?
                // L0394 call
                DPTR = (r64 * 2) + 0x0936;
                // L0395 call
                ACC = *DPTR;
                // L0400
                R5 = ACC;
                R7 = r0A;
                L0374(); // call
                // L0396 call
                DPTR = (r64 * 2) + 0x0935;
                R5 = *DPTR;
                // L0431
                R7 = r0A;
            } else if (r65 == 0x07) { // L0393
                // there's 11 of these in the matrix, with incrementing r64 values
                // regular keycodes
                // L0398
                DPTR = (r64 * 2 ) + 0x0942;
                // L0395
                ACC = *DPTR;
                // L0400
                R5 = ACC;
                R7 = r0A;
                L0374(); // call
                // L0399
                DPTR = (r64 * 2) + 0x0941;
                ACC = *DPTR;
                // L0400
                R5 = ACC;
                R7 = r0A;
            } else if (r65 == 0x0A) { // L0397
                // there's 15 of these in the martix, with incrementing r64 values
                // keypad keycodes
                // L0402
                // L0395
                DPH = ACC;
                ACC = *DPTR;
                // L0400
                R5 = ACC;
                R7 = r0A;
                L0374(); // call
                DPTR = (r64 * 2 ) + 0x0957;
                // L0395
                ACC = *DPTR;
                // L0400
                R5 = ACC;
                R7 = r0A;
            } else if (r65 == 0x09) { // L0401
                // only one of these, the esc key (sleep)
                L0369();
                L0374(); // call
                R7 = r0A;
                R5 = 0x66; // KC_POWER
            } else if (r65 == 0x0C) { // L0403
                // one of these, F3 (screen switch)
                // sends l gui + p
                R7 = r0A;
                R5 = 0x64; // KC_NUBS?
                L0374(); // call
                // L0404 call
                R7 = r0A;
                R5 = 0x13; // KC_P
                L0374(); // call
                L0143(); // update hw cuts
                // L0405
                while (!(TXFLG1 & 0x08) && (TXFLG1 & 0x03));
                // L0406
                R7 = r0A;
                R5 = 0x08; // KC_E
                L0370();
                L0143(); // L0446 update hw cuts
                return; // L0360

            } else {
                return;
            }
            // L0373
            L0374();
            return
        }
        // L0365
        if (r65 == 0x02) {
            if (r64 == 0x08) {
                R0 = 0x15;
                *R0 = 0x01;
            }
            // L0420 next
            // L0368 jump
            L0369(); // call
            L0370(); // jump
            return;

        }
        // L0419
        if (r65 == 0x01) {
            // L0422 jump
            L0369(); // call
            L0373(); // jump
            return;
        }
        // L0421
        if (r65 == 0x03)
            // L0424 jump
            L0369(); // call
            L0384(); // jump
            return;
        // L0423
        if (r65 == 0x05)
            // L0426 jump
            L0369(); // call
            L0389(); // jump
            return;
        // L0425
        if (r65 == 0x06) {
            DPH = L0394(); // call
            R5 = *DPTR;
            if (R5 == 0xFE) { // Fn + F7, disables touchpad
                if (r24)
                    r24 = 1;
                else
                    r24 = 0;
                return;
            } else {
                // L0429 jump
                // L0431 jump
                R7 = r0A;
                // L0373
            }
        }
        // L0427
        if (r65 == 0x07) {
            // L0432 jump
            if (r26) {
                // L0398
                DPTR = (r64 * 2 ) + 0x0942;
                R5 = *DPTR;
                // L0431 jump
            } else {
                // L0447 jump
                R0 = 0x15;
                if (*R0) {
                    // L0448 jump
                    // L0399
                    DPTR = (r64 * 2) + 0x0941;
                    if (*DPTR == 0x43) { // KC_F10
                        R7 = 0x01;
                    } else {
                        // L0450
                        R7 = 0x00;
                    }
                    // L0451
                    if (R7) {
                        R0 = 0x14;
                        *R0 = 0;
                        R0 = 0x17;
                        R7 = R0*;
                        if (R7 & 0x01) {
                            // L0454 call
                            r10 = 0;
                            r11 = 0;
                            ACC = R7;
                            // ret
                            ACC &= 0xFE;
                            *R0 = ACC;
                            r12 = 0x04;
                        } else {
                            // L0453 jump
                            // L0467 call
                            r10 = 0;
                            r11 = 0;
                            R0 = 0x17;
                            ACC = *R0;
                            // ret
                            ACC |= 0x01;
                            *R0 = ACC;
                            r12 = 0x06;
                        }
                        // L0455
                        rC0 = 1;
                        rC1 = 1;
                        L0456(); // call and ret
                        L0138(); // call and ret
                    }
                    // L0452
                    // L0399
                    DPTR = (r64 * 2) + 0x0941;
                    if (*DPTR == 0x44) { // KC_F11
                        R7 = 0x01;
                    } else {
                        // L0457
                        R7 = 0x00;
                    }
                    // L0458
                    if (R7) {
                        R0 = 0x14;
                        *R0 = 0x01;
                        R0 = 0x17
                        R7 = *R0;
                        if (R7 & 0x02) {
                            // L0454 call
                            r10 = 0;
                            r11 = 0;
                            ACC = R7;
                            // ret
                            ACC &= 0xFD;
                            *R0 = ACC;
                            r12 = 0x04;
                        } else {
                            // L0460 jump
                            // L0467 call
                            r10 = 0;
                            r11 = 0;
                            R0 = 0x17;
                            ACC = *R0;
                            // ret
                            ACC |= 0x02;
                            *R0 = ACC;
                            r12 = 0x06;
                        }
                        // L0461
                        rC0 = 1;
                        rC1 = 1;
                        L0456(); // call and ret
                        L0138(); // call and ret
                    }
                    // L0459
                    // L0399
                    DPTR = (r64 * 2) + 0x0941;
                    if (*DPTR == 0x45) { // KC_F12
                        R7 = 0x01;
                    } else {
                        // L0462
                        R7 = 0x00;
                    }
                    // L0463
                    if (R7) {
                        // L0464
                        R0 = 0x14;
                        *R0 = 0x02;
                        R0 = 0x17;
                        R7 = *R0;
                        if (R7 & 0x04) {
                            // L0454 call
                            r10 = 0;
                            r11 = 0;
                            ACC = R7;
                            // ret
                            ACC &= 0xFB;
                            *R0 = ACC;
                            r12 = 0x04;
                        } else {
                            // L0465
                            // L0467 call
                            r10 = 0;
                            r11 = 0;
                            R0 = 0x17;
                            ACC = *R0;
                            // ret
                            ACC |= 0x04;
                            *R0 = ACC;
                            r12 = 0x06;
                        }
                        // L0466
                        rC0 = 1;
                        rC1 = 1;
                        L0136();
                        R5 = 0x01;
                        R7 = 0xA0;
                        L0137();
                        R5 = 0x01;
                        R7 = 0x00;
                        L0137();
                        R0 = 0x17;
                        R7 = *R0;
                        R5 = 0x01;
                        L0137();
                        L0138();
                    } else {
                        return; // L0360 i think this should be changed
                    }
                } else {
                    // L0449
                    L0399();
                    R5 = ACC;
                    // L0431 jump
                }
            }
        }
        // L0433


        // L0428
        // L0396 call
        // L0431 jump
        R7 = r0A;
        // L0373
        L0374(); // jump
        return;

    }
    r37 = 0;
    r51 = 0;
    if (r09) { // L0358
        r09 = 0;
    }
    R0 = 0x6D;
    if (*R0 == 0xF1) {
        *R0 = 0;
        EA = 0;
        // L0199 call { should be its own function i think
            L0136();
            R5 = 0x01;
            R7 = 0x20;
            L0137();
            if (R7 != 0xFB) {
                // L0353 jump
                R5 = 0x01;
                R7 = 0x1D;
                L0137();
                L0138();
                L0220();
                L0136();
                R5 = 0x01;
                R7 = 0x21;
                L0137();
                if (R7 != 0xFB) {
                    // L0355
                    R7 = 0x01;
                    L0139();
                    R0 = 0x6D;
                    *R0 = r07;
                    L0138();
                    // ret
                }
            }
            // L0354 jump
            L0138();
            R0 = 0x6D;
            *R0 = 0;
            // ret
        // } L099
        EA = 1;
    }
    // L0198
    R0 = 0x92
    if (*R0 == 0) {
        // L0201 call
    } else {
        // L0200
        L0286();
    }
    // L0202
    if (r0B) {
        r0B = 0;
        // L0204 call {
        if (r3C)
            if (--r3D == 0)
                r3D = r3C // possibly backwards
        // ret from L0211 } L0204
        if (r12 == 0) {
            // L0205 call {
            r9E &= 0xF8;
            if (r2B & 0x01) {
                rC1 = 0;
                r1A = 1;
            } else {
                // L0206
                rC1 = 1;
                r1A = 0;
            }
            // L0207
            if (r2B & 0x02) {
                rC0 = 0;
            } else {
                // L0208
                rC0 = 1;
            }
            // L0209
            if (r2D & 0x04) {
                rC2 = 0;
                // ret
            } else {
                // L0210
                rC2 = 1;
                // ret
            }
            // } L0205
        }
    } else {
        // L0203
        if (r0C) {
            r0C = 0;
        }
    }
    L0140();

}

// set R5 modifiers to 0xAC
void L0370(void) {
    // L0370
    r22 = 1;
    if (R7 != 0) {
        R0 = 0xAC;
        *R0 |= R5;
    } else {
        // L0371
        R0 = 0xAC;
        *R0 &= ~R5;
    }
    // ret
}

void L0374(void) {
    if (R7) {
        R6 = 0;
        // L0378 next op
        do {
            R0 = 0xAD + R6;
            if (!*R0) {
                R0 = 0xAD + R6;
                *R0 = r05;
                r22 = 1;
                return; // beyond L0359
            }  
            // L0376
            R0 = 0xAD + R6;
            if (!(*R0 ^ R5))
                return; // L0377, beyond L0359
            R6++;
        } while (R6 != 0x06);
        return;
    }
    // L0375
    R6 = 0;
    // L0382
    do {
        R0 = 0xAD + R6;
        if (*R0 ^ R5 == 0) {
            if (0x05 < R6) {
                R7 = r06;
                // L0381
                while (true) {
                    if (0x05 < R7)
                        break;
                    R0 = 0xAE + R7;
                    R4 = *R0;
                    R0 = 0xAD + R7;
                    *R0 = r04;
                    R7++;
                }
            }
            // L0380
            R0 = 0xB2;
            *R0 = 0;
            r22 = 1;
            return; // beyond
        }
        // L0379
        R6++;
    } while (R6 != 0x06);
    return;
}

void L0384(void) {
    // L0384
    ACC = R5 + 0x50;
    ACC >> 3;
    ACC &= 0x1F;
    R6 = ACC;
    r06 &= 0x1F;
    R6++;
    ACC = *(R5 & 0x07 + 0x271D);
    R3 = ACC;
    R4 = ACC;
    if (R7) {
        R0 = 0xB3 + R6;
        if (R4 & *R0)
            return; // L0386
        ACC = *R0 | R4;
    } else {
        // L0385
        R0 = 0xB3 + R6;
        if (R4 & *R0 == 0)
            return; // L0386
        ACC = ~R3 & *R0;
    }
    // L0387
    *R0 = ACC;
    r21 = 1;
    return; // L0386
}

void L0456(void) {
    // L0456
    L0136();
    R5 = 0x01;
    R7 = 0xA0;
    L0137();
    R5 = 0x01;
    R7 = 0x00;
    L0137();
    R0 = 0x17;
    R7 = *R0;
    R5 = 0x01;
    L0137();
    // ret
}

void L0477(void) {
    // L0477
    P3CON = 0x0D;
    r2B = 0;
    L0131(); // call
    L0478(); // call
    L0131(); // call
    R7 = 0x6E;
    L0297(); // call
    L0479(); // call

    // L0480 jump {
    EA = 0;
    L0131(); // call
    P4CON |= 0x60;
    DFC = 0x01;
    r20 = 0x01;
    if (!r1B)
        return; // L0481
    DFC = 0x41;

    // L0482 call {
    DADDR = 0
    r3C = 0x7D;
    r3D = 0x7D;
    r3E = 0x01;
    R7 = 0;
    // L0484
    do {
        R0 = 0x95 + R7;
        *R0 = 0
        R0 = 0x97 + R7;
        *R0 = 0
        R7++;
    }
    while (R7 != 0x02);
    r44 = 0x01;
    // } L0482
    
    r20 = 0x82;
    R7 = 0xCA;
    
    // L0483 jump 
    DFC = R7;
    return; // from L0483

    // } L0480
}

// sets up a lot of timers and ports
void L0478(void) {
    // L0478
    // L0485
    IE = 0;
    IE2 = 0;
    IRQEN = 0;
    IRQEN2 = 0;
    IP = 0;
    IP2 = 0;
    IF = 0;
    IF2 = 0;
    IRQFG = 0;
    IRQFG2 = 0;

    L0131();

    // L0486 call {
    // L0488
    R7 = 0;
    // L0495
    do {
        R0 = R7 + 0x2F
        *R0 = 0;
        R7++
    } while (R7 != 0x08);
    R0 = 0xAC; // no idea why this couldn't just be apart of the loop below
    *R0 = 0;
    R7 = 0;
    // L0496
    do {
        R0 = R7 + 0xAD
        *R0 = 0;
        R7++
    } while (R7 != 0x06);
    R7 = 0;
    // L0497
    do {
        R0 = R7 + 0xB3
        *R0 =0;
        R7++;
    } while (R7 != 0x04);
    r22 = 0x00;
    r21 = 0x20;
    r24 = 0x00;
    R0 = 0x17
    *R0 = 0;

    // L0489
    r27 = 0;
    r26 = 0;
    R0 = 0x81;
    *R0 = 0;
    R0--;
    *R0 = 0;
    r39 = 0;
    r38 = 0;
    r51 = 0;
    r37 = 0;
    r3B = 0;
    r3F = 0;
    r40 = 0;
    r41 = 0;
    r42 = 0;
    r43 = 0;
    r44 = 0;
    r45 = 0;
    R0 = 0x6D;
    *R0 = 0;
    R0 = 0x93;
    *R0 = 0xFC;
    R0 = 0x92;
    *R0 = 0;
    R0 = 0xD4
    *R0 = 0;
    R0 = 0xD5;
    *R0 = 0x03;
    R0 = 0xB0;
    *R0 = 0;

    // L0490 jump
    R7 = 0x12;
    R0 = 0x6E;
    // L0491
    do {
        *R0 = 0;
        R0++;
    } while (R7);
    // L0492 call
    R7 = 0x12;
    R0 = 0x99;
    // L0494
    do {
        *R0 = 0;
        R0++;
    } while (R7);
    R7 = 0x10;
    R0 = 0x82;
    // L0493
    do {
        *R0 = 0;
        R0++;
    } while (R7);

    // ret pops up

    // } L0486

    r95 = 0;

    // L0487 jump {

    P0CON = 0;
    P1CON = 0;
    P2CON = 0;
    P3CON = 0x0D;
    P4CON = 0x60;

    P0WK = 0;
    P1WK = 0;
    P2WK = 0;
    P3WK = 0;
    P4WK &= 0xF8;

    PORT0 = 0xFF;
    PORT1 = 0xFF;
    PORT3 = 0xFF;
    PORT2 = 0xFF;
    PORT4 |= 0x07;

    return // this pops up b/c of the jump

    // } L0487
}

void L0479(void) {
    // L0479
    BTCON = 0xA0;
    IE = 0x88;
    // ret
}