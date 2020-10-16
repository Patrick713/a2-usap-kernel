cmd_net/ax25/ax25.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ax25/ax25.ko net/ax25/ax25.o net/ax25/ax25.mod.o;  true
