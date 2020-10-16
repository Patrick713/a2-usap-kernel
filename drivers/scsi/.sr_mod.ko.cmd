cmd_drivers/scsi/sr_mod.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/scsi/sr_mod.ko drivers/scsi/sr_mod.o drivers/scsi/sr_mod.mod.o;  true
