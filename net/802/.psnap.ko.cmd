cmd_net/802/psnap.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/802/psnap.ko net/802/psnap.o net/802/psnap.mod.o;  true
