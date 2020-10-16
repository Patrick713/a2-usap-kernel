cmd_net/netfilter/xt_HL.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_HL.ko net/netfilter/xt_HL.o net/netfilter/xt_HL.mod.o;  true
