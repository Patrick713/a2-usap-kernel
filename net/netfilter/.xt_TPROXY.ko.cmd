cmd_net/netfilter/xt_TPROXY.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_TPROXY.ko net/netfilter/xt_TPROXY.o net/netfilter/xt_TPROXY.mod.o;  true