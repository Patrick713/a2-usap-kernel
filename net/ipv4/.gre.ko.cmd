cmd_net/ipv4/gre.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/gre.ko net/ipv4/gre.o net/ipv4/gre.mod.o;  true
