cmd_net/netfilter/xt_multiport.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_multiport.ko net/netfilter/xt_multiport.o net/netfilter/xt_multiport.mod.o;  true
