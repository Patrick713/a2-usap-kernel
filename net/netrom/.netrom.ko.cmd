cmd_net/netrom/netrom.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netrom/netrom.ko net/netrom/netrom.o net/netrom/netrom.mod.o;  true
