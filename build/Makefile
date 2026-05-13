CC=arm-none-eabi-gcc
AS=arm-none-eabi-as
LD=arm-none-eabi-ld
OBJCOPY=arm-none-eabi-objcopy
CFLAGS=-mcpu=cortex-m3 -mthumb -O2 -I../../kernel -I../../drivers -I../../fs -I../../apps -I../../libs
all: mica.elf mica.bin
mica.elf: boot.o kernel.o drivers.o fs.o apps.o libs.o
	$(LD) -T linker.ld -o $@ $^
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
%.o: %.s
	$(AS) $< -o $@
mica.bin: mica.elf
	$(OBJCOPY) -O binary $< $@
clean:
	rm -f *.o *.elf *.bin