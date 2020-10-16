cmd_drivers/net/ifb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/ifb.ko drivers/net/ifb.o drivers/net/ifb.mod.o;  true
