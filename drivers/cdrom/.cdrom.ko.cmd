cmd_drivers/cdrom/cdrom.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/cdrom/cdrom.ko drivers/cdrom/cdrom.o drivers/cdrom/cdrom.mod.o;  true
