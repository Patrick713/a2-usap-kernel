cmd_net/netfilter/xt_recent.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_recent.ko net/netfilter/xt_recent.o net/netfilter/xt_recent.mod.o;  true
