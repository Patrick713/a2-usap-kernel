cmd_net/802/garp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/802/garp.ko net/802/garp.o net/802/garp.mod.o;  true
