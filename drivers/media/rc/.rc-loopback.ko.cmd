cmd_drivers/media/rc/rc-loopback.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/rc/rc-loopback.ko drivers/media/rc/rc-loopback.o drivers/media/rc/rc-loopback.mod.o;  true