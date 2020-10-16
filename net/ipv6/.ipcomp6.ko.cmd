cmd_net/ipv6/ipcomp6.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv6/ipcomp6.ko net/ipv6/ipcomp6.o net/ipv6/ipcomp6.mod.o;  true
