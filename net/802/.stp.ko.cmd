cmd_net/802/stp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/802/stp.ko net/802/stp.o net/802/stp.mod.o;  true
