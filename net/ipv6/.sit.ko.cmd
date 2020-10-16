cmd_net/ipv6/sit.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv6/sit.ko net/ipv6/sit.o net/ipv6/sit.mod.o;  true
