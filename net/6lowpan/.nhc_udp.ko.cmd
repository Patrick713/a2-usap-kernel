cmd_net/6lowpan/nhc_udp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/6lowpan/nhc_udp.ko net/6lowpan/nhc_udp.o net/6lowpan/nhc_udp.mod.o;  true
