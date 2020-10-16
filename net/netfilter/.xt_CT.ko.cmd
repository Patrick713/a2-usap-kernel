cmd_net/netfilter/xt_CT.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_CT.ko net/netfilter/xt_CT.o net/netfilter/xt_CT.mod.o;  true
