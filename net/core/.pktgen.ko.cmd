cmd_net/core/pktgen.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/core/pktgen.ko net/core/pktgen.o net/core/pktgen.mod.o;  true
