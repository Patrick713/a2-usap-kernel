cmd_drivers/scsi/sg.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/scsi/sg.ko drivers/scsi/sg.o drivers/scsi/sg.mod.o;  true
