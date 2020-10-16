cmd_drivers/net/veth.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/veth.ko drivers/net/veth.o drivers/net/veth.mod.o;  true
