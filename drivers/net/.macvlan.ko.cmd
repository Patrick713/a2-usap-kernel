cmd_drivers/net/macvlan.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/macvlan.ko drivers/net/macvlan.o drivers/net/macvlan.mod.o;  true
