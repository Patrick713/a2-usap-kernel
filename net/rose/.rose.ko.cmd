cmd_net/rose/rose.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/rose/rose.ko net/rose/rose.o net/rose/rose.mod.o;  true
