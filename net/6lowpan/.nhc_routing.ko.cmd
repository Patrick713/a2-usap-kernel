cmd_net/6lowpan/nhc_routing.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/6lowpan/nhc_routing.ko net/6lowpan/nhc_routing.o net/6lowpan/nhc_routing.mod.o;  true