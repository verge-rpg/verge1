CC=gcc
# CFLAGS= -w -o6 -mpentium   # PGCC
CFLAGS= -w -o3 -m486       # GCC
LDFLAGS= -s

OBJ = battle.o control.o engine.o entity.o main.o menu.o menu2.o pcx.o render.o sound.o timer.o vc.o vclib.o vga.o keyboard.o mikmod.a

main: $(OBJ)
