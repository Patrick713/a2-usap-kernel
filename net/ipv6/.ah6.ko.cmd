cmd_net/ipv6/ah6.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv6/ah6.ko net/ipv6/ah6.o net/ipv6/ah6.mod.o;  true
