cmd_net/netfilter/xt_hl.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_hl.ko net/netfilter/xt_hl.o net/netfilter/xt_hl.mod.o;  true
