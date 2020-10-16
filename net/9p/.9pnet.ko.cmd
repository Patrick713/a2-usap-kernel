cmd_net/9p/9pnet.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/9p/9pnet.ko net/9p/9pnet.o net/9p/9pnet.mod.o;  true
