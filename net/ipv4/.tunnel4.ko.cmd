cmd_net/ipv4/tunnel4.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/tunnel4.ko net/ipv4/tunnel4.o net/ipv4/tunnel4.mod.o;  true
