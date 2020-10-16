cmd_drivers/scsi/st.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/scsi/st.ko drivers/scsi/st.o drivers/scsi/st.mod.o;  true
