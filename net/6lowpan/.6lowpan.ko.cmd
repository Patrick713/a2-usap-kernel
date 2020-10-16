cmd_net/6lowpan/6lowpan.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/6lowpan/6lowpan.ko net/6lowpan/6lowpan.o net/6lowpan/6lowpan.mod.o;  true
