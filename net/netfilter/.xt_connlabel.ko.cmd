cmd_net/netfilter/xt_connlabel.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_connlabel.ko net/netfilter/xt_connlabel.o net/netfilter/xt_connlabel.mod.o;  true
