cmd_net/6lowpan/nhc_hop.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/6lowpan/nhc_hop.ko net/6lowpan/nhc_hop.o net/6lowpan/nhc_hop.mod.o;  true
