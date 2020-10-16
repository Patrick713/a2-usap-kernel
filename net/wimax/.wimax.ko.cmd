cmd_net/wimax/wimax.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/wimax/wimax.ko net/wimax/wimax.o net/wimax/wimax.mod.o;  true
