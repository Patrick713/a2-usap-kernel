cmd_net/llc/llc.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/llc/llc.ko net/llc/llc.o net/llc/llc.mod.o;  true
