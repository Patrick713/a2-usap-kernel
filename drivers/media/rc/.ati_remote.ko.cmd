cmd_drivers/media/rc/ati_remote.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/rc/ati_remote.ko drivers/media/rc/ati_remote.o drivers/media/rc/ati_remote.mod.o;  true