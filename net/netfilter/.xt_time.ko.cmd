cmd_net/netfilter/xt_time.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_time.ko net/netfilter/xt_time.o net/netfilter/xt_time.mod.o;  true
