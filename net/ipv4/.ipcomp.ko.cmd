cmd_net/ipv4/ipcomp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/ipcomp.ko net/ipv4/ipcomp.o net/ipv4/ipcomp.mod.o;  true
