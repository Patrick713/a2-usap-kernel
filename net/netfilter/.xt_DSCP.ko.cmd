cmd_net/netfilter/xt_DSCP.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_DSCP.ko net/netfilter/xt_DSCP.o net/netfilter/xt_DSCP.mod.o;  true
