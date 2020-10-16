#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0xf861fb87, "xfrm6_rcv" },
	{ 0x1e3e1676, "xfrm6_find_1stfragopt" },
	{ 0x58e7a3f2, "xfrm6_protocol_deregister" },
	{ 0x94d5774d, "xfrm_unregister_type" },
	{ 0x7007414f, "xfrm6_protocol_register" },
	{ 0xb0304352, "xfrm_register_type" },
	{ 0xa096d6bf, "xfrm_input_resume" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x76d11765, "mem_map" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xdce19627, "crypto_ahash_digest" },
	{ 0x81d503b6, "skb_to_sgvec_nomark" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xf68b0045, "skb_push" },
	{ 0xc7a6be8a, "skb_cow_data" },
	{ 0xe75a6fd8, "ip6_redirect" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x5c289110, "ip6_update_pmtu" },
	{ 0xb8886e84, "make_kuid" },
	{ 0xa83a35ad, "xfrm_state_lookup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x99bb8806, "memmove" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0xd9b879d9, "crypto_ahash_setkey" },
	{ 0x7dbc831f, "crypto_alloc_ahash" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x78d14c6e, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "D80D1208B8E6DF0D9D97D77");
