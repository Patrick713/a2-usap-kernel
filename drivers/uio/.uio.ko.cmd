cmd_drivers/uio/uio.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/uio/uio.ko drivers/uio/uio.o drivers/uio/uio.mod.o;  true
