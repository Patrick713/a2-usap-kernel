cmd_net/ipv4/ipip.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/ipip.ko net/ipv4/ipip.o net/ipv4/ipip.mod.o;  true
