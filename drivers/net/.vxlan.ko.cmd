cmd_drivers/net/vxlan.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/net/vxlan.ko drivers/net/vxlan.o drivers/net/vxlan.mod.o;  true
