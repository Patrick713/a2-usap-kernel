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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xda897e27, "skb_to_sgvec" },
	{ 0x76d11765, "mem_map" },
	{ 0x94d5774d, "xfrm_unregister_type" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0x523c1a44, "ipv4_update_pmtu" },
	{ 0xd54f1913, "xfrm4_protocol_deregister" },
	{ 0xfffa3100, "sg_next" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xa28084e8, "pskb_put" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x5ea6fd3, "skb_page_frag_refill" },
	{ 0xc7a6be8a, "skb_cow_data" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0xa096d6bf, "xfrm_input_resume" },
	{ 0x5f754e5a, "memset" },
	{ 0x92aeea7b, "skb_checksum" },
	{ 0xc5850110, "printk" },
	{ 0x8d2f4deb, "xfrm_input" },
	{ 0xf68b0045, "skb_push" },
	{ 0x49d89cc7, "crypto_aead_encrypt" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x8b2bc06d, "crypto_aead_setkey" },
	{ 0xb0304352, "xfrm_register_type" },
	{ 0xc62cb6fa, "xfrm_state_mtu" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0x50456e2d, "ipv4_redirect" },
	{ 0xae6283c2, "crypto_destroy_tfm" },
	{ 0x78d14c6e, "xfrm_output_resume" },
	{ 0x1555017a, "skb_pull_rcsum" },
	{ 0x4c3275a, "__xfrm_state_destroy" },
	{ 0x7e05cfe8, "km_new_mapping" },
	{ 0xeecff7d7, "xfrm4_rcv" },
	{ 0x2e859034, "crypto_aead_decrypt" },
	{ 0x160ab7dd, "xfrm4_protocol_register" },
	{ 0xe82bfbf1, "crypto_aead_setauthsize" },
	{ 0x4d4ce517, "crypto_alloc_aead" },
	{ 0xa83a35ad, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd4dc2129, "___pskb_trim" },
	{ 0x9d8a03e9, "__skb_ext_del" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9b73dda5, "skb_copy_bits" },
	{ 0xcc286e8e, "__put_page" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9325FF34689242E4FD54DEE");
