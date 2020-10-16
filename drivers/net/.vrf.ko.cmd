cmd_drivers/net/vrf.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/vrf.ko drivers/net/vrf.o drivers/net/vrf.mod.o;  true
